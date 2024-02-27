#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>

int ft_error(char *str)
{
    while (*str)
        write(2, str++, 1);
    return 1;
}

int ft_chdir(int argc, char **argv)
{
    if (argc != 2)
        return (ft_error("error: cd: bad arguments\n"));
    else if (chdir(argv[1]) == -1)
        return (ft_error("error: cd: cannot change directory"));
    return 0;
}

int ft_exec(char **argv, char **envp, int i)
{
    int fds[2];
    int status = 0;
    int has_pipe = argv[i] && !strcmp(argv[i], "|");

    if (has_pipe && pipe(fds) == -1)
        return ft_error("error: fatal\n");
    
    int pid = fork();
    if (!pid)
    {
        argv[i] = 0;
        if (has_pipe && (dup2(fds[1], 1) == -1 || close(fds[0]) == -1 || close(fds[1]) == -1))
            retunr (ft_error("error: fatal/n"));
        execve(*argv, argv, envp);
        return(ft_error("cannot exec\n"));
    }

    waitpid(pid, &status, 0);
    if(has_pipe && (dup2(fds[0], 0) == -1 || close(fds[0]) == -1 || close(fds[1]) == -1))
        return (ft_error("fatal\n"));
    return(WIFEXITED(status) && WEXITSTATUS(status));
}

int main(int argc, char **argv, char **envp)
{
    int status = 0;
    int i = 0;

    if (argc > 1)
    {
        while(argv[i] && argv[++i])
        {
            argv += i;
            i = 0;
            while (argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
                i++;
            if(!strcmp(*argv, "cd"))
                status = ft_chdir(i, argv);
            else if (i)
                status = ft_exec(argv, envp, i);
        }
    }
    return (status);
}
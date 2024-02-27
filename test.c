#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int ft_error(char *str) 
{
    while (*str)
        write(2, str++, 1);
    return 1;
}

int ft_chdir(char **argv, int i) 
{
    if (i != 2)
        return ft_error("error: cd: bad arguments\n");
    else if (chdir(argv[1]) == -1)
        return ft_error("error: cd: cannot change directory to "), ft_error(argv[1]), ft_error("\n");
    return 0;
}

int ft_exec(char **argv, char **envp, int i) 
{
    int fd[2];
    int status;
    int has_pipe = argv[i] && !strcmp(argv[i], "|");

    if (has_pipe && pipe(fd) == -1)
        return ft_error("error: fatal\n");

    int pid = fork();
    if (!pid) 
    {
        argv[i] = 0;
        if (has_pipe && (dup2(fd[1], 1) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
            return ft_error("error: fatal\n");
        execve(*argv, argv, envp);
        return ft_error("error: cannot execute "), ft_error(*argv), ft_error("\n");
    }

    waitpid(pid, &status, 0);
    if (has_pipe && (dup2(fd[0], 0) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
        return ft_error("error: fatal\n");
    return WIFEXITED(status) && WEXITSTATUS(status);
}

int main(int argc, char **argv, char **envp) 
{
    int    i = 0;
    int    status = 0;

    if (argc > 1) 
    {
        while (argv[i] && argv[++i]) 
        {
            argv += i;
            i = 0;
            while (argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
                i++;
            if (!strcmp(*argv, "cd"))
                status = ft_chdir(argv, i);
            else if (i)
                status = ft_exec(argv, envp, i);
        }
    }
    return status;
}
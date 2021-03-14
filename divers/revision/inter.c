#include <unistd.h>
#include <stdio.h>

int     ft_check(char *s, char c, int i)
{
    int j;

    j = 0;
    while (j < i)
    {
        printf("1\n");
        if (s[j] != c)
            return (0);
        j++;
    }
    printf("bonjour\n");
    return (1);
}

void	ft_union(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        printf("test\n");
        if (ft_check(s2, s1[i], i))
            write(1, &s1[i], 1);
        i++;    
    }
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
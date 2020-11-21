/*
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main()
{
    char *line;
    int fd = open("1_newline", O_RDONLY);
    int fd1 = open("4_newlines", O_RDONLY);
    int fd2 = open("41_char", O_RDONLY);
    int fd3 = open("42_char", O_RDONLY);
    int fd4 = open("43_char", O_RDONLY);
    int fd5 = open("alphabet", O_RDONLY);
    int fd6 = open("empty_file", O_RDONLY);
    int fd7 = open("empty_lines", O_RDONLY);
    int fd8 = open("half_marge_bottom", O_RDONLY);

    int res = 1;
    int i;

    i = 0;


   /*
   printf("=============================================TEST_1=====================================\n");

    while ((res = get_next_line(fd, &line) > 0))
    {
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
        i++;
    }
    printf("<%d>\n", res);
    printf("|%s|\n", line);

    free(line);
    close(fd);

    printf("=============================================TEST_2=====================================\n");

    while ((res = get_next_line(fd1, &line) > 0))
    {
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
        i++;
    }
    printf("<%d>\n", res);
    printf("|%s|\n", line);

    free(line);
    close(fd1);

    printf("=============================================TEST_2=====================================\n");

    while ((res = get_next_line(fd2, &line) > 0))
    {
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
        i++;
    }
    printf("<%d>\n", res);
    printf("|%s|\n", line);

    free(line);
    close(fd2);

    printf("=============================================TEST_3=====================================\n");

    while ((res = get_next_line(fd3, &line) > 0))
    {
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
        i++;
    }
    printf("<%d>\n", res);
    printf("|%s|\n", line);

    free(line);
    close(fd3);

    printf("=============================================TEST_4=====================================\n");

    while ((res = get_next_line(fd4, &line) > 0))
    {
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
        i++;
    }
    printf("<%d>\n", res);
    printf("|%s|\n", line);

    free(line);
    close(fd4);

    printf("=============================================TEST_5=====================================\n");

    while ((res = get_next_line(fd5, &line) > 0))
    {
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
        i++;
    }
    printf("<%d>\n", res);
    printf("|%s|\n", line);

    free(line);
    close(fd5);

    printf("=============================================TEST_6=====================================\n");

    while ((res = get_next_line(fd6, &line) > 0))
    {
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
        i++;
    }
    printf("<%d>\n", res);
    printf("|%s|\n", line);

    free(line);
    close(fd6);
*/
  /*  printf("=============================================TEST_7=====================================\n");

    while ((res = get_next_line(fd7, &line) > 0))
    {
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
        i++;
    }
    printf("<%d>\n", res);
    printf("|%s|\n", line);

    free(line);
    close(fd7);
*/
    /*    printf("=============================================TEST_8=====================================\n");

      while ((res = get_next_line(fd8, &line) > 0))
       {
           printf("<%d>\n", res);
           printf("|%s|\n", line);
           free(line);
           i++;
       }
       printf("<%d>\n", res);
       printf("|%s|\n", line);

       free(line);
       close(fd8);



}*/

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

/*int main()
{
 	char *line;
 	int fd1 = open("file1.txt", O_RDONLY);
 	int fd2 = open("1_newline", O_RDONLY);
 	int fd3 = open("4_newlines", O_RDONLY);
 	int i = 0;
 	while (i < 5)
 	{
 		printf("gnl -> %d\n", get_next_line(fd1, &line));
 		printf("|%s|\n", line);
 		free(line);
 		get_next_line(fd2, &line);
 		printf("||%s||\n", line);
 		free(line);
 		get_next_line(fd3, &line);
 		printf("|||%s|||\n", line);
 		free(line);
 		i++;
 	}
}*/


/*
int main()
{
    char *line;
    int fd = open("empty_lines", O_RDONLY);
    int fd1 = open("mix_marge1", O_RDONLY);
    int fd2 = open("4_newlines", O_RDONLY);
    int fd3 = open("43_char", O_RDONLY);
    int res;
    int i;

    i = 0;
    while (i < 9)
    {
        res = get_next_line(fd, &line);
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
        i++;
    }
    // printf("<%d>\n", res);
    // printf("|%s|\n", line);
    // free(line);
    close(fd);
    printf("===================================\n");
    while ((res = get_next_line(fd1, &line)) > 0)
    {
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
    }
    printf("<%d>\n", res);
    printf("|%s|\n", line);
    free(line);
    close(fd1);
    printf("===============================\n");
    while ((res = get_next_line(fd2, &line)) > 0)
    {
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
    }
    printf("<%d>\n", res);
    printf("|%s|\n", line);
    free(line);
    close(fd2);
    printf("===============================\n");
    while ((res = get_next_line(fd3, &line)) > 0)
    {
        printf("<%d>\n", res);
        printf("|%s|\n", line);
        free(line);
    }
    printf("<%d>\n", res);
    printf("|%s|\n", line);
    free(line);
    close(fd3);
}
*/
#include <stdlib.h>
#include <unistd.h>

//int				get_next_line(int fd, char **line);

int main()
{
    int             fd;
    int             i;
    int             j;
    char    		*line = 0;
    char			*lineadress[66];

    j = 1;
    printf("\n==========================================\n");
    printf("========== TEST 1 : The Alphabet =========\n");
    printf("==========================================\n\n");

    if (!(fd = open("alphabet", O_RDONLY)))
    {
        printf("\nError in open\n");
        return (0);
    }
    while ((i = get_next_line(fd, &line)) > 0)
    {
        printf("<%d>\n", i);
        printf("|%s|\n", line);
        lineadress[j - 1] = line;
        j++;
    }
    printf("|%s|\n", line);
    free(line);
    close(fd);

    if (i == -1)
        printf ("\nError in Fonction - Returned -1\n");
    else if (j == 66)
        printf("\nRight number of lines\n");
    else if (j != 66)
        printf("\nNot Good - Wrong Number Of Lines\n");
    while (--j > 0)
        free(lineadress[j - 1]);
    j = 1;

    printf("\n==========================================\n");
    printf("========= TEST 2 : Empty Lines ===========\n");
    printf("==========================================\n\n");

    if (!(fd = open("empty_lines", O_RDONLY)))
    {
        printf("\nError in open\n");
        return (0);
    }
    while ((i = get_next_line(fd, &line)) > 0)
    {
        printf("|%s\n", line);
        free(line);
        j++;
    }
    printf("|%s\n", line);
    free(line);
    close(fd);

    if (i == -1)
        printf ("\nError in Fonction - Returned -1\n");
    else if (j == 9)
        printf("\nRight number of lines\n");
    else if (j != 9)
        printf("\nNot Good - Wrong Number Of Lines\n");
    j = 1;
 /*
    printf("\n==========================================\n");
    printf("======== TEST 3 : The Empty File =========\n");
    printf("==========================================\n\n");

    if (!(fd = open("empty_file", O_RDONLY)))
    {
        printf("\nError in open\n");
        return (0);
    }
    while ((i = get_next_line(fd, &line)) > 0)
    {
        printf("|%s\n", line);
        free(line);
        j++;
    }
    printf("|%s\n", line);
    free(line);
    close(fd);

    if (i == -1)
        printf ("\nError in Fonction - Returned -1\n");
    else if (j == 1)
        printf("\nRight number of lines\n");
    else if (j != 1)
        printf("\nNot Good - Wrong Number Of Lines\n");
    j = 1;
    printf("\n==========================================\n");
    printf("========= TEST 4 : One New Line ==========\n");
    printf("==========================================\n\n");

    if (!(fd = open("1_newline", O_RDONLY)))
    {
        printf("\nError in open\n");
        return (0);
    }
    while ((i = get_next_line(fd, &line)) > 0)
    {
        printf("|%s|\n", line);
        free(line);
        j++;
    }
    printf("|%s|\n", line);
    free(line);
    close(fd);

    if (i == -1)
        printf ("\nError in Fonction - Returned -1\n");
    else if (j == 2)
        printf("\nRight number of lines\n");
    else if (j != 2)
        printf("\nNot Good - Wrong Number Of Lines\n");
    j = 1;
    printf("\n==========================================\n");
    printf("========= TEST 5 : Four New Lines ========\n");
    printf("==========================================\n\n");

    if (!(fd = open("4_newlines", O_RDONLY)))
    {
        printf("\nError in open\n");
        return (0);
    }
    while ((i = get_next_line(fd, &line)) > 0)
    {
        printf("|%s\n", line);
        free(line);
        j++;
    }
    printf("|%s\n", line);
    free(line);
    close(fd);

    if (i == -1)
        printf ("\nError in Fonction - Returned -1\n");
    else if (j == 5)
        printf("\nRight number of lines\n");
    else if (j != 5)
        printf("\nNot Good - Wrong Number Of Lines\n");
    j = 1;
    printf("\n==========================================\n");
    printf("============== TEST 6 : 42 ===============\n");
    printf("==========================================\n\n");

    if (!(fd = open("41_char", O_RDONLY)))
    {
        printf("\nError in open\n");
        return (0);
    }
    while ((i = get_next_line(fd, &line)) > 0)
    {
        printf("|%s\n", line);
        free(line);
        j++;
    }
    printf("|%s\n", line);
    free(line);
    close(fd);
    if (!(fd = open("42_char", O_RDONLY)))
    {
        printf("\nError in open\n");
        return (0);
    }
    while ((i = get_next_line(fd, &line)) > 0)
    {

        printf("|%s\n", line);
        free(line);
        j++;
    }
    printf("|%s\n", line);
    free(line);
    close(fd);
    if (!(fd = open("43_char", O_RDONLY)))
    {
        printf("\nError in open\n");
        return (0);
    }
    while ((i = get_next_line(fd, &line)) > 0)
    {
        printf("|%s\n", line);
        free(line);
        j++;
    }
    printf("|%s\n", line);
    free(line);
    close(fd);

    if (i == -1)
        printf ("\nError in Fonction - Returned -1\n");
    else if (j == 1)
        printf("\nRight number of lines\n");
    else if (j != 1)
        printf("\nNot Good - Wrong Number Of Lines\n");
    j = 1;
    printf("\n==========================================\n");
    printf("============= TEST 7 : Marge =============\n");
    printf("==========================================\n\n");

    int fd2;

    if (!(fd = open("half_marge_top", O_RDONLY)))
    {
        printf("\nError in open\n");
        return (0);
    }
    if (!(fd2 = open("half_marge_bottom", O_RDONLY)))
    {
        printf("\nError in open\n");
        return (0);
    }
    while ((i = get_next_line(fd, &line)) > 0)
    {
        printf("%s\n", line);
        free(line);
        j++;
    }
    free(line);
    while ((i = get_next_line(fd2, &line)) > 0)
    {
        printf("%s\n", line);
        free(line);
        j++;
    }
    printf("%s\n", line);
    free(line);
    close(fd);
    close(fd2);

    if (i == -1)
        printf ("\nError in Fonction - Returned -1\n");
    else if (j == 25)
        printf("\nRight number of lines\n");
    else if (j != 25)
        printf("\nNot Good - Wrong Number Of Lines\n");
    j = 1;
    printf("\n==========================================\n");
    printf("========= TEST 8 : Wrong Input ===========\n");
    printf("==========================================\n\n");

    if (get_next_line(180, &line) == -1)
        printf("Well Done, you return -1 if no FD\n\n");
    else
        printf("Not Good, you don't return -1 if no FD\n\n");
    return (0);
    */
}
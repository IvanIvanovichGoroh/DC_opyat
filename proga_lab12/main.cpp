//12
#include <stdio.h>
#include <time.h>

/*"Нам нужно думать не о той женщине, с которой мы спим сейчас, а о пиве, которое мы будем пить завтра вечером."*/

int main()
{
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    FILE *file;
    file = fopen("fscanf.txt", "w");
    c = a + b;
    fprintf(file, "%d", c);
}

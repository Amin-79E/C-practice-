#include<stdio.h>
#include<time.h>
#include<unistd.h>

int main(void)
{
    time_t rawtime = 0;
    struct tm *pTime = NULL;

    while(1)
    {
        time(&rawtime);
        pTime = localtime(&rawtime);
        printf("\r%02d:%02d:%02d", (*pTime).tm_hour, (*pTime).tm_min, (*pTime).tm_sec);
        sleep(1);
    }

    return 0;
}
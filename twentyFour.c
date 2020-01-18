#include <stdio.h>
#include <stdlib.h>

main()
{
    int counter1,counter2,counter3,counter4,total=0;
    FILE *fp=fopen("the24","w");
    for(counter1=0;counter1<=9;counter1++)
    {
        for(counter2=0;counter2<=9;counter2++)
        {
            for(counter3=0;counter3<=9;counter3++)
            {
                for(counter4=0;counter4<=9;counter4++)
                {
                    if(counter1<=counter2&&counter2<=counter3&&counter3<=counter4)
                    {
                        total=total+1;

                        if(total%7==0)
                        {
                            fprintf(fp,"%d. %d %d %d %d\n",total,counter1,counter2,counter3,counter4);
                        }
                        else
                        {
                            fprintf(fp,"%d. %d %d %d %d    ",total,counter1,counter2,counter3,counter4);
                        }
                    }

                }
            }
        }
    }

    fclose(fp);
}


#include<stdio.h>
 #include<conio.h>
 void main()
 {
    char nm[20];
    int i,n;
    clrscr();
    printf("Enter  name \n");
    gets(nm);
    printf("How time\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
printf("%3d\t%s\n",i,nm);
    }
    getch();
    }

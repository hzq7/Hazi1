#include<stdio.h>

int main()
{
 int o1, o2, p1, p2;

 while(1)
 {

 scanf("%d:%d %d:%d",&o1,&p1,&o2,&p2);
 if(o1>=0 && o1<25 && o2>=0 && o2<25 && p1>=0 && p1<=60 && p2>=0 && p2<=60)
    break;
else
    printf("hulyegyerek!!\n");

 }
 int kul=(o2*60+p2)-(o1*60+p1);
    if(kul==60)
        printf("A két idõpont közötti különbség 60 perc. %d", kul);
    else if(kul<60)
        printf("kevesebbmint60perc. %d",kul);
        else
            printf("tobbmint60perc. %d",kul);


printf("recska")


return 0;
}

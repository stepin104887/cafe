#include <stdio.h>

void main()
{
    int i,sum,j,qnt[100],p[20],gst,tsum,subt;
    char name[20][20]={"double melon","orange muskmelon","sweet tife","exotic cocktail","cramberry grapes","oreo kulfi shake",
                        "kit kat shakes","browini shakes","banana vanilla grapes","digestive shake","cleanser","weight mangement",
                        "veggi jucie","ujc blend","immue boost","watermelon jucie","pineapple jucie","sweet lime","black grapes"};
    int ch;
    j=0;
    printf("\n\n\n");
    printf("**********welcome to cafe shop**********\n\n");
    printf("******menu*******\n\n");
    printf("      natural trails    \n");
    printf("item            price\n");
    printf("1.double melon     rs.60\n");
    printf("2.orange muskmelon  rs.60\n");
    printf("3.sweet tife        rs.50\n");
    printf("4:exotic cocktail    rs.40\n");
    printf("5.cramberry grapes    rs.50\n");
    printf("6.oreo kulfi shake    rs.50\n");
    printf("7.kit kat shakes       rs.50\n");
    printf("8.browine shakes       rs.60\n");
    printf("9.banana vanilla grapes rs.40\n");
    printf("10.digestive shakes     rs.40\n\n");
    printf("       wellness-blends      \n");
    printf("item               price\n");
    printf("11.cleanser           rs.70\n");
    printf("12.mixed fruit jucie  rs.80\n");
    printf("13.veggi jucie        rs.80\n");
    printf("14.ujc blend          rs.70\n");
    printf("15.immue boost        rs.60\n\n");
    printf("       regular    \n");
    printf("item               price\n");
    printf("16.watermelon jucice    rs.40\n");
    printf("17.pineapple jucie      rs.40\n");
    printf("18.sweer lime           rs.50\n");
    printf("19.black grapes         rs.50\n\n");
    printf("        extras      \n");
    printf("item               price\n");
    printf("20.cheese          rs.20\n");
    printf("******************\n\n");
p[0]=60;
p[1]=60;
p[2]=50;
p[3]=40;
p[4]=50;
p[5]=50;
p[6]=50;
p[7]=60;
p[8]=40;
p[9]=40;
p[10]=70;
p[11]=80;
p[12]=80;
p[13]=70;
p[14]=60;
p[15]=40;
p[16]=40;
p[17]=40;
p[18]=50;
p[19]=20;


 do


  {

Label:printf("enter item number to place the order\n");



scanf("%d",&i);

if(i>0)
{
 printf("enter quantity of item to order\n");
 
 scanf("%d",&qnt[j]);

 subt=p[i-1]*qnt[j];
 sum=sum+subt;
 printf("%s  %d*%d=%d\n",name[i-1],p[i-1],qnt[j],subt);
 j++;
 printf("continue to place orders?enter 1 for yes and 2 for no\n");
  scanf("%d",&ch);
}
else
goto Label;
 }while(ch==1);
gst=sum*0.18;
tsum=sum+gst;
printf("*****************************************\n");
printf("   cafe shop\n");
printf("bill:\n");
printf("total bill  rs.%d\n",sum);
printf("gst tax   rs.%d\n",gst);
printf("total price  rs.%d\n\n",tsum);
printf("*gst 18 percent on total order*\n");
printf("thanks for visiting\n");
printf("*****************************************\n");
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ay_no;
    printf("ay numarasi giriniz:\n");
	scanf("%d",&ay_no);

    while(ay_no){
        if(ay_no>=1 && ay_no<=12){
         switch(ay_no){

	    case 1:printf("1.ay 31 gun icerir.");break;
	    case 2:printf("2.ay 28 gun icerir.");break;
	    case 3:printf("3.ay 31 gun icerir.");break;
	    case 4:printf("4.ay 30 gun icerir.");break;
	    case 5:printf("5.ay 31 gun icerir.");break;
	    case 6:printf("6.ay 30 gun icerir.");break;
	    case 7:printf("7.ay 31 gun icerir.");break;
	    case 8:printf("8.ay 31 gun icerir.");break;
	    case 9:printf("9.ay 30 gun icerir.");break;
	    case 10:printf("10.ay 31 gun icerir.");break;
	    case 11:printf("11.ay 30 gun icerir.");break;
	    case 12:printf("12.ay 31 gun icerir.");break;

         }
       break;
        }
      else
        printf("\n\nHATA, tekrar gir.\n");
        scanf("%d",&ay_no);
        continue;



    return 0;
}
}

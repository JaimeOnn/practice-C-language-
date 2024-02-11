#include <stdio.h>

    //Jaime B. Perez Jr

int militime(int hour2, int minutes2, char dayindicator2);//this is the function prototyp

int main() {// the main function
    int hour, minutes;  // it holds a number intager
    char dayindicator;  // it holds character or letters,

    printf("This program will convert the standard time to military time\n");
    printf("Please be sure to Put this symbol(:) in the middle of the hour and minutes\n");//instruction
    printf("______________________________________________\n");
    printf("Please input time(Expected input 00:00 PM/AM):");
    scanf("%d:%d %c", &hour, &minutes, &dayindicator);

    //converter to military hour time.
    militime(hour, minutes, dayindicator);
    return 0;

}
int militime(int hour2, int minutes2, char dayindicator2) {

    if (hour2 > 12){            // The purpose of this 1st if and if else is to ensure that
        printf("Error!");       // the program will not accept the over number. it focuse on
    }else if(minutes2 >= 60) {  // converting a standard time to military time.
        printf("Error!");       //

                                        //if the user place A or a it will automatically store as Am
    } else if(dayindicator2 == 'A' || dayindicator2 == 'a') {
        if(hour2 == 12){        //if hours is equal to 12
            hour2 = 0;          // the hours will automatically restart to 0
        }printf("\nIn military time it is %02d:%02dAM\n", hour2, minutes2);
    }                                                        // now the purpose of the 02 on %02d is to ensure
                                                            //that the number that lower than 2 digits will automatically
                                                            //added a leading 0 so that it will become 2digits.


                            //if the user place P or p it will automatically store as Pm
    else if(dayindicator2 == 'P' || dayindicator2 =='p') {
        if(hour2 != 12){    // if the hour is not equal to 12
            hour2 += 12;    //it will add 12hours,
        }
       printf("\nThe Military time is %02d:%02dPM\n", hour2, minutes2);
    }
    return 0;
}

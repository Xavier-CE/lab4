#include <stdio.h>

int main(){ //begining of the main function
        int td = 6; //touchdown value
        int safety = 2;//safety value
        int fg = 3;//field goal value
        int td2 = 8;//touchdown with 2 point conversion value
        int td1 = 7;//touchdown with 1 point conversion value
        int score = 0;//variable to hold the score input by the user

        while(1){//beginning of the while loop
		
		printf("Enter the NFL score (Enter 1 to stop)");//prompt the user to enter a score
                scanf("%d", &score);//read the score from the user
                
                if (score == 1){ //if the score is 1, break the loop
                      break;
                }

		printf("possible combinations of scoring plays if a teams score is %d\n", score);//print the score entered by the user
		

 for (int td2Count = 0; td2Count <= score; td2Count++) {//loop through the number of touchdowns with 2 point conversions
            for (int td1Count = 0; td1Count <= score; td1Count++) {//loop through the number of touchdowns with 1 point conversions
                for (int tdCount = 0; tdCount <= score; tdCount++) {//loop through the number of touchdowns
                    for (int fgCount = 0; fgCount <= score; fgCount++) {//loop through the number of field goals
                        for (int safetyCount = 0; safetyCount <= score; safetyCount++) {//loop through the number of safeties

			// calculate the total score based on the number of each scoring play
                            int total = td2Count * td2
                                      + td1Count * td1
                                      + tdCount * td
                                      + fgCount * fg
                                      + safetyCount * safety;

                            if (total == score) { //if the total score equals the score entered by the user, print the combination of scoring plays
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",// print the combination of scoring plays
                                       td2Count, td1Count, tdCount, fgCount, safetyCount);
                            }//end of the if statement
                        }
                    }
                }
            }
        }// end of the for loops
    }//end of the while loop

    return 0;
}//end of the main function

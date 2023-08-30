// Students Marks Sum - HackerRank - ??/07/2023
// joaomcavadinha
// All test cases done.

int marks_summation(int* marks, int number_of_students, char gender) {
    int i, sum;
    sum = 0;
   if(gender == 'b'){
       for(i=0; i <= number_of_students; i++){
           sum += marks[i];
           i += 1;
       }
    }
    else{
        for(i=0; i <= number_of_students; i++){
           i += 1;
           sum = sum + marks[i];
        }
       }
       return sum;
   }


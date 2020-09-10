// Author: Khalil Stroman kzs5955@psu.edu
// Collaborator: Daniel Stebbins drs5972@psu.edu
// Collaborator: David Kim dkk5396@psu.edu
// Collaborator: Emanuel Bassill Chuckran eab6017@psu.edu
// Section: 12
// Breakout: 2
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  
 char *grade = readline("Enter your CMPSC 131 grade: ");
double g = atof(grade);
if (g >= 93){
  printf("Your letter grade for CMPSC 131 is A.\n");
}
else if (90 <= g && g < 93){
  printf("Your letter grade for CMPSC 131 is A-.\n");
}
else if (87 <= g && g < 90){
  printf("Your letter grade for CMPSC 131 is B+.\n");
}
else if (83 <= g && g < 87){
  printf("Your letter grade for CMPSC 131 is B.\n");
}
else if (80 <= g && g < 83){
  printf("Your letter grade for CMPSC 131 is B-.\n");
}
else if (77 <= g && g < 80){
  printf("Your letter grade for CMPSC 131 is C+.\n");
}
else if (70 <= g && g < 77){
  printf("Your letter grade for CMPSC 131 is C.\n");
}
else if (60 <= g && g < 70){
  printf("Your letter grade for CMPSC 131 is D.\n");
}
else {
  printf("Your letter grade for CMPSC 131 is F.\n");
}

  return 0;
}
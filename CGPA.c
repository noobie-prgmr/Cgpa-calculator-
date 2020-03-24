#include <stdio.h>
#include <stdlib.h>

  int main()
{

    printf("Enter the number of courses offered this semester\n"); scanf("%d", &num_courses);
    if(num_courses<1)
    {
       printf("You can't do less than 1 course");
    }
    printf(" ATTENTION! In all cases, Grade point should be entered first followed by credit load\n");
    puts("FOR A COURSE NOT OFFERED, LEAVE BLANK OR FILL BOTH GRADE POINT AND CREDIT LOAD WITH 0");
totalcredit=o;
    printf("total credit load");
    scanf("%d",&o);
    for(int i=0;i<num_courses;i++){
    printf("\n\n\nEnter your grade and credit load respectively for Course %d\n",i+1);
     scanf("%s", &grades[i]); scanf("%f", &n[i]);
     totalcredit+=n[i];
    }
    formular(); main();
}
char grades[13];
  float n[13];
  /** \brief
   *
   * \param
   * \param
   * \return
   *
   */
  float totalcredit;
    int num_courses;
  int getV(char grade){
    switch(grade){
    case 'A':
    case 'a':
        return 5;
    case 'B':
    case 'b':
        return 4;
    case 'C':
    case 'c':
        return 3;
    case 'D':
    case 'd':
        return 2;
    case 'F':
    case 'f':
        return 0;
    default:
        printf("Invalid grade %c",grade);
        return 0;
  }
  }
  float formular()
{
    float sumgrade;
    for(int i=0;i<num_courses;i++)
        sumgrade+=(getV(grades[i])*n[i]);
  float CGPA = sumgrade/totalcredit;
  printf("Your total CGPA for this semester is %f\n", CGPA);
  if(CGPA>=4.5)
  {
      printf("CONGRATS SCHOLAR, YOU ARE A FIRST CLASS CANDIDATE!\n");
  }
  else if(CGPA>=3.5) {    printf("YOU ARE A SECOND CLASS UPPER CANDIDATE\n");}

  else if(CGPA>=2.5){     printf("YOU ARE A SECOND CLASS LOWER CANDIDATE\n");}

  else if(CGPA<2.5){      printf("YOU SHOULD  WORK HARDER\n");}

  return;
}


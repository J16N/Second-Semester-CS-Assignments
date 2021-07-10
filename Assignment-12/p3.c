#include <stdio.h>
#include <stdlib.h>

char *get_name(void);

struct Student
{
  char *name;
  int roll;
  float grade;
};

int main(void)
{
  printf("\n------ STUDENTS DETAILS ------\n");
  
  FILE *student_details = fopen("./student_details_p3.txt", "w+");
  struct Student temp_stud;

  printf("\n Enter student details. Hit CTRL + D when done.\n");
  int n_stud = 1, c;
  do
  {
    printf(" Student-%d (<name> <roll> <grade>): ", n_stud);
    temp_stud.name = get_name();
    c = scanf("%d%f", &temp_stud.roll, &temp_stud.grade);
    
    if (temp_stud.name)
      fprintf(student_details, "Name: %s \nRoll No: %d\nGrade: %g\n\n", 
        temp_stud.name, temp_stud.roll, temp_stud.grade);
    
    n_stud++;
  } while (c != EOF);
  
  printf("\n\n");
  fclose(student_details);
  return 0;
}

char *get_name(void)
{
  char *str = NULL;
  int c, s = 0;
  while (((c = getc(stdin)) <= '0' || c >= '9') && c != EOF)
  {
    if (c != '\n')
    {
      str = realloc(str, (s + 2) * sizeof(char));
      str[s] = c;
      ++s;
    }
  }
  ungetc(c, stdin);
  if (str) str[s] = '\0';
  return str;
}
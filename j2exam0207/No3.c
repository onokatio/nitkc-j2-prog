#include <stdio.h>
#include <stdlib.h>

#define NUM 25

struct status {
  int no;
  int japanese;
  int english;
  int math;
  int sum;
  double ave;
};

void initialize(struct status students[]);
void disp(struct status students[]);
int max_eng(struct status students[]);
int max_all(struct status students[]);
void sort(struct status students[]);
void swap(struct status *a, struct status *b);

int main(void)
{
  struct status students[NUM];
  int index;
  double ave_math;
	int i;
  
  srand(208);

  initialize(students);
  disp(students);

	printf("(1) max english(nom) = %d\n",students[max_eng(students)].no);
	printf("(2) max english(score) = %d\n",students[max_eng(students)].english);
  
	printf("(3)\n");
	i = max_all(students);
	printf("No    Ja  En  Ma  | Sum  Ave\n");
	printf("%d %3d %3d %3d  | %3d  %3.1f\n",
                  students[i].no,
                  students[i].japanese,
                  students[i].english,
                  students[i].math,
                  students[i].sum,
            students[i].ave);



	printf("\n\n(4)\n");
	sort(students);
  disp(students);
	printf("\n\n");
  return 0;
}

void sort(struct status students[]){
	int i,j;
	for(i=0; i<NUM-1; i++){
	  for(j=NUM-1; j>i; j--){
	    if(students[j-1].sum<students[j].sum){
	      swap(&students[j-1], &students[j]);
	    }
	  }
	}
}

int max_all(struct status students[]){
	int max = 0;
	int i;
	for(i=0; i<NUM; i++){
		if(students[i].sum > students[max].sum){
			max = i;
		}
	}
	return max;
}

int max_eng(struct status students[]){
	int max = 0;
	int i;
	for(i=0; i<NUM; i++){
		if(students[i].english > students[max].english){
			max = i;
		}
	}
	return max;
}

void initialize(struct status students[])
{
  int i;

  for (i=0; i<NUM; i++) {
    students[i].no = 4401+i;
    students[i].japanese = rand()%101;
    students[i].english = rand()%101;
    students[i].math = rand()%101;
    students[i].sum = students[i].japanese + students[i].japanese + students[i].japanese;
    students[i].ave = 0.0;
  }
}

void disp(struct status students[])
{
  int i;

  printf("No    Ja  En  Ma  | Sum  Ave\n");
  for (i=0; i<NUM; i++) {
    printf("%d %3d %3d %3d  | %3d  %3.1f\n",
           students[i].no,
           students[i].japanese,
           students[i].english,
           students[i].math,
           students[i].sum,
	   students[i].ave);
  }
  printf("\n");
}

void swap(struct status *a, struct status *b){
	struct status tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

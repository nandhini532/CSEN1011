/*Step 1: Start 
Step 2: Declare variable t1, t2, t, n, i
Step 3: Initialize variable t1=0, t2=1 and  i=3
Step 4: Read n from user 
Step 5: Print t1 and t2 
Step 6: Repeat until i<=n : 
           Step 6.1: ++i
           Step 6.2: t1=t2
           Step 6.3: t2=t
           Step 6.4:  t=t1+t2
Step 7: Stop*/

#include <stdio.h>
int main() {

  int i, n;
  int t1 = 0, t2 = 1;
  int t = t1 + t2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", t);
    t1 = t2;
    t2 = t;
    t = t1 + t2;
  }

  return 0;
}

/*Output:
Enter the number of terms: 20
Fibonacci Series: 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181
learnings:
learned how to find fibnocci series*/

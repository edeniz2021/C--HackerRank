/*
Print exactly n lines. On each line print 3 space-separated integers,the a,b and c   of the corresponding triangle.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    double p,s[n];
    for(int i=0; i<n; i++) {
        p = (tr[i].a+tr[i].b+tr[i].c)/2.00;   
        s[i] = sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));   
    }

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(s[i]>s[j]) {
                triangle temp = tr[i];
                tr[i] = tr[j];
                tr[j] = temp;
                float stemp = s[i];
                s[i] = s[j];
                s[j] = stemp;


            }
        }
    }
}


int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

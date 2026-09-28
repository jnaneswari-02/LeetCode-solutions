
 #include<stdio.h>

void solve(int a[], int start, int mid, int end) {
    int size1 = mid - start + 1;
    int size2 = end - mid;
	int a1[size1];
    int a2[size2];
    
    int i, j, k;
    for (i = 0; i < size1; i++) {
        a1[i] = a[start + i];
    }
    for (j = 0; j < size2; j++) {
        a2[j] = a[mid + 1 + j];
    }
    i = 0;
    j = 0; 
    k = start; 
    while (i < size1 && j < size2) {
        if (a1[i] <= a2[j]) {
            a[k] = a1[i];
            i++;
        } else {
            a[k] = a2[j];
            j++;
        }
        k++;
    }

    
    while (i < size1) {
        a[k] = a1[i];
        i++;
        k++;
    }

    
    while (j < size2) {
        a[k] = a2[j];
        j++;
        k++;
    }
}


void divide(int a[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        divide(a, start, mid);  
        divide(a, mid + 1, end); 
        solve(a, start, mid, end); 
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    int i;
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    divide(a, 0, n - 1); 

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}


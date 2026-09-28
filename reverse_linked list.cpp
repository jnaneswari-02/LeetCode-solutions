/*#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Data;
    struct Node* Next;
};

int main() {
    int N, i, value;
    scanf("%d", &N);

    struct Node* Head = NULL;  // Start with an empty list

    // Reading values and inserting at the front
    for (i = 0; i < N; i++) {
        scanf("%d", &value);

        // Creating a new node
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->Data = value;
        NewNode->Next = Head;  // Point to the current head
        Head = NewNode;        // Update head to new node
    }

    // Printing the list
    struct Node* Temp = Head;
    while (Temp) {
        printf("%d ", Temp->Data);
        Temp = Temp->Next;
    }

    return 0;
}
// rREVERSE LINKED LIST
*/
#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);  // Read array size

    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    // Reverse the array
    for (i = 0; i < N / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }

    // Print reversed array
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*  // Iterative Approach 
int findLargestNode(int T[], int n)
{
    // Check whether the length of the tree is 0 (empty)
    if (n <= 0)
    {
        printf("Tree is Empty\n");
        return -1;
    }

    // Assign Largest Value to our first Element
    int largest = T[0];
    for (int i = 0; i < n; i++)
    {
        if (T[i] > largest)
        {
            largest = T[i];
        }
    }

    return largest;
}  */

// Recursive Approach 
int findLargestNodeR(int T[],int n,int index){
   if(index >= n){
    return -1;
   }
//    Finding Largest Value of Left Subtree
   int leftChild = findLargestNodeR(T,n,2*index+1);
//    Finding Largest Value of Right Subtree
   int rightChild = findLargestNodeR(T,n,2*index+2);
   // Finding Largest Value From Left and Right Subtree
   int largest = (leftChild>rightChild)?leftChild:rightChild;
   
   return(T[index] > largest) ? T[index] : largest;
}
int main()
{
    int tree[50];
    int n;
    printf("Enter size of tree or number of elements in tree\n");
    scanf("%d", &n);
    printf("Enter Elements in tree\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tree[i]);
    }
    // int largestValue = findLargestNode(tree, n);
    int largestValue = findLargestNodeR(tree, n ,0);
    if (largestValue != -1)
    {
        printf("The largest Value in the Tree is %d\n", largestValue);
    }
    else
    {
        printf("Tree is Empty\n");
    }
    return 0;
}
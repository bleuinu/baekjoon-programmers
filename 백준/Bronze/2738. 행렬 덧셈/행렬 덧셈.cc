#include <stdio.h>
int main(void) {
    int n,m;
    scanf("%d %d", &n, &m);
    
    int arr[n][m] = {0};
    
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int temp;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            scanf("%d", &temp);
            arr[i][j] += temp;
        }
    }
    
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            printf("%d ", arr[i][j]);
        }
    }
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* pref, int n, int* returnSize) 
{
    int i;
    int* a = malloc(n * sizeof(int));
    if (!a) 
    return NULL; 
    a[0] = pref[0];
    for (i = 1; i < n; i++) {
        a[i] = pref[i] ^ pref[i - 1];
    }
    *returnSize = n;
    return a;
}

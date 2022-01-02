// Problem link: https://www.hackerrank.com/challenges/candies/problem
long candies(int n, vector<int> arr) {
    vector<int> prefix(n);
    vector<int> suffix(n);
    prefix[0] = 1;
    suffix[n-1] = 1;
    int sum = 0;
    for (int i=1; i < n; i++) {
        if (arr[i] > arr[i-1]) {
            prefix[i] = prefix[i-1]+1;
        }
        else {
            prefix[i]=1;
        }
    }
    for (int i=n-2; i>=0; i--) {
        if (arr[i]>arr[i+1]) {
            suffix[i] = suffix[i+1]+1;
        }
        else {
            suffix[i]=1;
        }
    }
    for (int i = 0; i < n; i++) {
        sum += max(prefix[i],suffix[i]);
    }
    return sum;
}

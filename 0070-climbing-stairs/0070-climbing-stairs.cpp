class Solution {
public:
    int climbStairs(int n) {

        if (n == 1)
            return 1;

        if (n == 2)
            return 2;

        int previous = 1;
        int current = 2;

        for (int i = 3; i <= n; i++) {

            int next = previous + current;

            previous = current;
            current = next;
        }

        return current;
    }
};
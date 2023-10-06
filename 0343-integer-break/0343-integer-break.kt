class Solution {
    fun integerBreak(n: Int): Int {
        return if (n <= 3) {
        n - 1
    } else if (n % 3 == 1) {
        (4 * 3.0.pow((n - 2) / 3)).toInt()
    } else {
        (3.0.pow(n / 3) * if (n % 3 == 0) 1 else 2).toInt()
    }
    }
}
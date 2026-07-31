class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x < 2:
            return x
        
        # Binary Search range:
        # The square root of x (where x >= 4) is always less than x / 2.
        left, right = 2, x // 2
        
        while left <= right:
            mid = left + (right - left) // 2
            num = mid * mid
            
            if num > x:
                # If mid^2 is greater than x, the root must be smaller
                right = mid - 1
            elif num < x:
                # If mid^2 is smaller than x, the root might be mid or larger
                left = mid + 1
            else:
                # Perfect square found
                return mid
                
        # If no perfect square is found, 'right' will hold the floor value
        return right
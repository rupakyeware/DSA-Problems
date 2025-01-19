class Solution:
    def maxArea(self, height: List[int]) -> int:
        points: {}
        p1  = 0
        p2 = len(height) - 1
        max_area = 0
        while(p1 < p2):
            
            greater = smaller = 0
            temp_p1 = p1
            temp_p2 = p2
            if(height[temp_p1] >= height[temp_p2]):
                greater = height[temp_p1]
                smaller = height[temp_p2]
                p2 -= 1
            else:
                greater = height[temp_p2]
                smaller = height[temp_p1]
                p1 += 1
            length = greater - (greater - smaller)
            breadth = temp_p2 - temp_p1
            area = length * breadth
            if (area >= max_area):
                max_area = area
        return max_area        
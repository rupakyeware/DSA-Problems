class Solution:
    def intToRoman(self, num: int) -> str:
        num_map = {1000: 'M', 900: 'CM', 500 : 'D', 400 : 'CD', 100: 'C', 90: 'XC', 50: 'L', 40: 'XL', 10: 'X', 9: 'IX', 5: 'V', 4: 'IV', 1: 'I'}
        to_roman = ""                  

        for key, value in num_map.items():
            if num == 0:
                break
            count = num // key
            to_roman += value * count
            num -= count * key
        return to_roman

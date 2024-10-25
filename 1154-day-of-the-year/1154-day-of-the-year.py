class Solution(object):
    def dayOfYear(self, date):
        """
        :type date: str
        :rtype: int
        """
        months = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        
        day = int(date[8:])  
        month = int(date[5:7])  
        year = int(date[0:4])  
        
        days = 0
        
        if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
            months[2] = 29 
        
        for mon in range(1, month):
            days += months[mon]
        
        
        return days + day
        
        
        
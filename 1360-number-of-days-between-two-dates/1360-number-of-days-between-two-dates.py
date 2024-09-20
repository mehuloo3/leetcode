from datetime import datetime
class Solution(object):
    def daysBetweenDates(self, date1, date2):
        """
        :type date1: str
        :type date2: str
        :rtype: int
        """
        l=datetime.strptime(date1,'%Y-%m-%d');
        m=datetime.strptime(date2,'%Y-%m-%d');
        
        return abs((l-m).days)
        
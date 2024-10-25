class Solution(object):
    def removeSubfolders(self, folder):
        """
        :type folder: List[str]
        :rtype: List[str]
        """
        folder.sort()
        result = [folder[0]]
        
        for path in folder[1:]:
            last_added = result[-1]
            if not (path.startswith(last_added) and path[len(last_added)] == '/'):
                result.append(path)
                
        return result
        
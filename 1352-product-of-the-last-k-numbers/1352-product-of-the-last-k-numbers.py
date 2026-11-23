class ProductOfNumbers(object):

    def __init__(self):
        self.a = []

    def add(self, num):
        if num == 0:
            self.a = []           
        elif num == 1:
            self.a.append(1)     
        else:
            for i in range(len(self.a)):
                self.a[i] *= num
            self.a.append(num)

    def getProduct(self, k):
        l = len(self.a)
        if k > l:
            return 0
        return self.a[l - k]

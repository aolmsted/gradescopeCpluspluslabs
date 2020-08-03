import unittest
from gradescope_utils.autograder_utils.decorators import weight, tags
import subprocess32 as subprocess

def sanatize(output):
    return output.lower().replace("\t"," ").replace("enter price of the first item:","").replace("enter price of the second item:","").replace("does customer have a club card? (y/n):","").replace("enter tax rate, e.g. 5.5 for 5.5% tax:","").replace("\n"," ").lstrip().rstrip().replace("  "," ")       


class TestIntegration(unittest.TestCase):
    def setUp(self):
        pass

    @weight(2)
    @tags("integration")
    def test_sample1(self):
        """Evaluating Test 1 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("10\n20\ny\n8.25", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "base price = 30.00 price after discounts = 22.50 total price = 24.36")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample2(self):
        """Evaluating Test 2 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("20\n10\ny\n8.25", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "base price = 30.00 price after discounts = 22.50 total price = 24.36")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample3(self):
        """Evaluating Test 3 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("10\n10\nn\n5", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "base price = 20.00 price after discounts = 15.00 total price = 15.75")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample4(self):
        """Evaluating Test 4 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("10\n10\nY\n5", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "base price = 20.00 price after discounts = 13.50 total price = 14.18")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample5(self):
        """Evaluating Test 5 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("10\n10\nY\n5", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "base price = 20.00 price after discounts = 13.50 total price = 14.18")
        mytest.terminate()

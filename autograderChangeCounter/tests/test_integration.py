import unittest
from gradescope_utils.autograder_utils.decorators import weight, tags
import subprocess

def sanatize(output):
    return output.lower().replace("please enter the number of coins:","").replace("# of pennies:","").replace("# of nickels:","").replace("# of dimes:","").replace("# of quarters:","").replace("\n","").lstrip().rstrip()			 


class TestIntegration(unittest.TestCase):
    def setUp(self):
        pass

    @weight(2)
    @tags("integration")
    def test_sample1(self):
        """Evaluating Counter Test 1 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("20\n4\n13\n17\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "the total is 6 dollars and 22 cents")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample2(self):
        """Evaluating Counter Test 2 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("20\n4\n13\n16\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "the total is 6 dollars and 21 cents")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample3(self):
        """Evaluating Counter Test 3 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("16\n4\n13\n16\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "the total is 5 dollars and 21 cents")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample4(self):
        """Evaluating Counter Test 4 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("16\n4\n13\n15\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "the total is 5 dollars and 20 cents")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample5(self):
        """Evaluating Counter Test 5 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("16\n4\n13\n14\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "the total is 5 dollars and 19 cents")
        mytest.terminate()

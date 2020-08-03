import unittest
from gradescope_utils.autograder_utils.decorators import weight, tags
import subprocess32 as subprocess

def sanatize(output):
    return output.lower().replace("\t"," ").replace("please enter weight in pounds:","").replace("please enter height in inches:","").replace("\n","").lstrip().rstrip()       


class TestIntegration(unittest.TestCase):
    def setUp(self):
        pass

    @weight(2)
    @tags("integration")
    def test_sample1(self):
        """Evaluating Test 1 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("135\n71\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower[:13], "bmi is: 18.83")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample2(self):
        """Evaluating Test 2 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("140\n72\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower[:13], "bmi is: 18.99")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample3(self):
        """Evaluating Test 3 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("168\n70.5\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower[:13], "bmi is: 23.76")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample4(self):
        """Evaluating Test 4 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("300\n70.5\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower[:13], "bmi is: 42.44")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample5(self):
        """Evaluating Test 5 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("88.4\n61\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower[:13], "bmi is: 16.70")
        mytest.terminate()

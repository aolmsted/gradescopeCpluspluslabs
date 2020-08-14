import unittest
from gradescope_utils.autograder_utils.decorators import weight, tags
import subprocess

def sanatize(output):
    return output.lower().replace("\t"," ").replace("enter the day the call started at:","").replace("enter the time the call started at (hhmm):","").replace("enter the duration of the call (in minutes):","").replace("\n"," ").lstrip().rstrip().replace("  "," ")


class TestIntegration(unittest.TestCase):
    def setUp(self):
        pass

    @weight(2)
    @tags("integration")
    def test_sample1(self):
        """Evaluating Test 1 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("Fri\n2350\n22\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "this call will cost $5.50")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample2(self):
        """Evaluating Test 2 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("Sat\n0100\n2\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "this call will cost $0.30")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample3(self):
        """Evaluating Test 3 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("Fri\n2350\n22\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "this call will cost $5.50")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample4(self):
        """Evaluating Test 4 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("Mon\n1000\n2\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "this call will cost $0.80")
        mytest.terminate()

    @weight(2)
    @tags("integration")
    def test_sample5(self):
        """Evaluating Test 5 Output"""
        mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
        output, err = mytest.communicate("Tue\n0200\n2\n", 1)
        olower = sanatize(output)
        self.assertEqual(olower, "this call will cost $0.50")
        mytest.terminate()

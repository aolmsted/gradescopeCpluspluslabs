import unittest
from gradescope_utils.autograder_utils.decorators import weight, tags
import subprocess

def sanatize(output):
    return output.lower().replace("please enter the amount of money to convert:","").replace("# of dollars:","").replace("# of cents:","").replace("\n","").lstrip().rstrip()			 


class TestIntegration(unittest.TestCase):
		def setUp(self):
				pass

		@weight(2)
		@tags("integration")
		def test_sample1(self):
				"""Evaluating Test 1 Output"""
				mytest = subprocess.Popen('./a.out'.split(),
																stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("2\n37\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "the coins are 9 quarters, 1 dimes, 0 nickels and 2 pennies")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample2(self):
				"""Evaluating Test 2 Output"""
				mytest = subprocess.Popen('./a.out'.split(),
																stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("2\n42\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "the coins are 9 quarters, 1 dimes, 1 nickels and 2 pennies")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample3(self):
				"""Evaluating Test 3 Output"""
				mytest = subprocess.Popen('./a.out'.split(),
																stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("2\n36\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "the coins are 9 quarters, 1 dimes, 0 nickels and 1 pennies")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample4(self):
				"""Evaluating Test 4 Output"""
				mytest = subprocess.Popen('./a.out'.split(),
																stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("3\n47\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "the coins are 13 quarters, 2 dimes, 0 nickels and 2 pennies")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample5(self):
				"""Evaluating Test 5 Output"""
				mytest = subprocess.Popen('./a.out'.split(),
																stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("2\n57\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "the coins are 10 quarters, 0 dimes, 1 nickels and 2 pennies")
				mytest.terminate()

import unittest
from gradescope_utils.autograder_utils.decorators import weight, tags
import subprocess32 as subprocess

def sanatize(output):
    return output.lower().replace("please enter weight in kilograms:","").replace("please enter height in meters:","").replace("\n"," ").lstrip().rstrip().replace("  ", " ")		 


class TestIntegration(unittest.TestCase):
		def setUp(self):
				pass

		@weight(2)
		@tags("integration")
		def test_sample1(self):
				"""Evaluating Test 1 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("50\n1.58\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "bmi is: 20.03, status is normal")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample2(self):
				"""Evaluating Test 2 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("140\n1.4\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "bmi is: 71.43, status is obese")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample3(self):
				"""Evaluating Test 3 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("40\n1.4\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "bmi is: 20.41, status is normal")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample4(self):
				"""Evaluating Test 4 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("42\n1.4\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "bmi is: 21.43, status is normal")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample5(self):
				"""Evaluating Test 5 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("42\n1.65\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "bmi is: 15.43, status is underweight")
				mytest.terminate()

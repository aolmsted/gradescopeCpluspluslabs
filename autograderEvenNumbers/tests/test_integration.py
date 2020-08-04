import unittest
from gradescope_utils.autograder_utils.decorators import weight, tags
import subprocess

def sanatize(output):
    return output.lower().replace("please enter a positive integer:","").replace("\n","").lstrip().rstrip()


class TestIntegration(unittest.TestCase):
		def setUp(self):
				pass

		@weight(2)
		@tags("integration")
		def test_sample1(self):
				"""Evaluating Test 1 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("3\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "246")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample2(self):
				"""Evaluating Test 2 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("2\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "24")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample3(self):
				"""Evaluating Test 3 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("4\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "2468")
				mytest.terminate()


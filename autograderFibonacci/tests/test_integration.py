import unittest
from gradescope_utils.autograder_utils.decorators import weight, tags
import subprocess

def sanatize(output):
    return output.lower().replace("please enter a positive integer greater than 1:","").replace("\n","").lstrip().rstrip()


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
				self.assertEqual(olower, "112")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample2(self):
				"""Evaluating Test 2 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("2\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "11")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample3(self):
				"""Evaluating Test 3 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("4\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "1123")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample4(self):
				"""Evaluating Test 4 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("5\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "11235")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample5(self):
				"""Evaluating Test 5 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("6\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "112358")
				mytest.terminate()

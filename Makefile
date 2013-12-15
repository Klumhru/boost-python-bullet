CC="ccache gcc"

all: build install

test:
	nosetests linear_math_tests

build:
	python setup.py build

force-build:
	python setup.py build --force

install:
	python setup.py install

dev: force-build install test

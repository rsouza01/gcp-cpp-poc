.DEFAULT_GOAL := help

help:
	@echo 'Available commands:'
	@echo -e 'build \t\t - \t Builds the example'
	@echo -e 'clean \t\t - \t Cleans the intermediary folders'


build:
	bazel build //main:hello-world

clean:
	bazel clean --expunge


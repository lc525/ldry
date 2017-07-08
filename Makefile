#Just a stub, jumpstarts the cmake Makefile generation and the build process

BUILD_DIR := build

.PHONY: all install uninstall help

all:
	@cd ${BUILD_DIR} && cmake $(args) ..

clean:
	@cd ${BUILD_DIR} && rm -rf *

install:
	@cd ${BUILD_DIR} && make -s install

uninstall:
	@cd ${BUILD_DIR} && make -s uninstall

help:
	@printf "Usage:\n\n  make [args=\"opt1 opt2 ...\"] [<stub_target>]\n\nThis is a stub build file that can be used to trigger compiling rscfl\ncomponents and their dependencies in a standard way. The actual build\nprocess relies on the cmake build system, which is bootstrapped if it\ncan't be found in your PATH.\n\n"
	@printf "  <stub_target> can be one of:"
	@$(MAKE) -pRrq -f $(lastword $(MAKEFILE_LIST)) : 2>/dev/null | awk -v RS= -F: '/^# File/,/^# Finished Make data base/ {if ($$1 !~ "^[#.]|Makefile") {printf "    "; print $$1;}}'
	@printf "\n stub_target = all (default):\n\n"
	@printf "\nPlease read more about building and installing ldry from README.md\n"

%:
	@:

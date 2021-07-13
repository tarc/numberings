from conans import ConanFile, CMake, tools


class Numberings(ConanFile):
    name = "numberings"
    version = "0.1.0"
    settings = "os", "compiler", "arch", "build_type"
    no_copy_source = True
    generators = "cmake"
    exports_sources = "include/*", "CMakeLists.txt", "tests/*"
    requires = "gtest/1.10.0"

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
        cmake.test()

    def package(self):
        self.copy("*.hpp")

    def package_id(self):
        self.info.header_only()

project(
    'c_libbool',          ['c'],         version : '0.0.1',         default_options : ['warning_level=2','c_std=gnu99'],
)
#//***********************************************************/
host_system = host_machine.system()
cc = meson.get_compiler('c')
libssh2 = dependency('libssh2', required : true)
openssl = dependency('openssl', required : true)
sh = find_program('sh', required : true)
passh = find_program('passh', required : true)

lib_bool = library('bool',
    [
        'src/bool.c',
    ],
    install: true,
    include_directories: [],
    dependencies: [],
    c_args : []
)

test1 = executable('test1',
  ['tests/test1.c'],
  include_directories: ['include','src'],
  )


# Generate a Pkg config file
pkg = import('pkgconfig')
pkg.generate(
    libraries: [lib_bool],
    subdirs: [],
    name: 'libbool',
    version: '1.0',
    filebase: 'libbool',
    description: 'Library for switching user-space stacks')

# Export the dependency
dep_bool = declare_dependency(
    link_with: [lib_bool],
    include_directories: [])

<!--
    =====================================
    generator=datazen
    version=3.1.4
    hash=b5ade7700391aa51fc34fae97d3c147a
    =====================================
-->

# hal-rp2040 ([0.1.0](https://github.com/vkottler/hal-rp2040/releases/tag/0.1.0))

[![codecov](https://codecov.io/gh/vkottler/hal-rp2040/branch/master/graph/badge.svg)](https://codecov.io/gh/vkottler/hal-rp2040)
![Build Status](https://github.com/vkottler/hal-rp2040/actions/workflows/yambs-project.yml/badge.svg)

*A hardware abstraction layer generated from the RP2040's SVD.*

## Workflow

Install [vmklib](https://github.com/vkottler/vmklib) such that you can
`mk --version` (a `pip install vmklib` to your desired Python environment is
all that's needed).

From a fresh checkout:

```
git submodule update --init
mk dz-sync
mk g
```

This should result in fully compiled code that you can now use or add to.


### Generating Interfaces

Structs and enumerations can be defined for
[ifgen](https://github.com/vkottler/ifgen) which can then generate C++ source
code into the project.

Generating configurations based on an
[SVD](https://github.com/vkottler/ifgen/tree/master/ifgen/data/svd) file:

```
mk ifgen-svd-XMC4700
```

Generating code from an `ifgen.yaml` in the root directory of the project:

```
mk ifgen
```

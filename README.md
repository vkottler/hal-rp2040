<!--
    =====================================
    generator=datazen
    version=3.2.4
    hash=a078cdb31597e55465a96fc225f91b9c
    =====================================
-->

# hal-rp2040 ([2.5.6](https://github.com/libre-embedded/hal-rp2040/releases/tag/2.5.6))

[![codecov](https://codecov.io/gh/libre-embedded/hal-rp2040/branch/master/graph/badge.svg)](https://codecov.io/gh/libre-embedded/hal-rp2040)
![Build Status](https://github.com/libre-embedded/hal-rp2040/actions/workflows/yambs-project.yml/badge.svg)

*A hardware abstraction layer generated from the RP2040's SVD.*

## Documentation

### Generated

* By [sphinx+breathe+exhale](https://vkottler.github.io/cpp/sphinx/hal-rp2040/)
(What's [sphinx](https://www.sphinx-doc.org/en/master/) /
[breathe](https://breathe.readthedocs.io/en/latest/) /
[exhale](https://exhale.readthedocs.io/en/latest/)?)

## Workflow

Install [vmklib](https://github.com/libre-embedded/vmklib) such that you can
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
[ifgen](https://github.com/libre-embedded/ifgen) which can then generate C++ source
code into the project.

Generating configurations based on an
[SVD](https://github.com/libre-embedded/ifgen/tree/master/ifgen/data/svd) file:

```
mk ifgen-svd-XMC4700
```

Generating code from an `ifgen.yaml` in the root directory of the project:

```
mk ifgen
```

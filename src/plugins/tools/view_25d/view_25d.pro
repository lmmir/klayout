
TEMPLATE = subdirs

equals(HAVE_QT5, "1") {
  SUBDIRS = lay_plugin unit_tests
}

unit_tests.depends += lay_plugin

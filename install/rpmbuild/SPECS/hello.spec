Name:           hello
Version:        1.00
Release:        1%{?dist}
Summary:        Prints hello world

License:       GPLv3
URL:           www.github.com
Source0:       %{name}-%{version}.tar.gz

BuildRequires:  gcc     
Requires(post): info
Requires(preun): info


%description
Program just prints hello world


%global debug_package %{nil}


%prep
%setup


%build
make PREFIX=/usr


%install
make PREFIX=/usr DESTDIR=%{?buildroot} install


%files
%{_bindir}/hello


%changelog
* Mon Apr  9 2018 makerpm
- 

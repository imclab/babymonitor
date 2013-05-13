from django.conf.urls import patterns, include, url


urlpatterns = patterns('',
    url(r'^$', 'monitor.views.home', name='home'),
	url(r'^alert/$', 'monitor.views.alert', name='alert'),
	url(r'^cries/$', 'monitor.views.cries', name='cries'),
	url(r'^users/$', 'monitor.views.users', name='users'),
	url(r'^modify_user/$', 'monitor.views.modify_user', name='modify_user'),
	url(r'^options/$', 'monitor.views.options', name='options'),
)

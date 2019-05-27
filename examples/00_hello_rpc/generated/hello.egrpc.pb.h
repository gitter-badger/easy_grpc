// This code was generated by the easy_grpc protoc plugin.
#ifndef EASY_GRPC_hello_INCLUDED_H
#define EASY_GRPC_hello_INCLUDED_H

#include "hello.pb.h"

#include "easy_grpc/gen_support.h"

#include <memory>

namespace pkg {

class HelloService : public ::easy_grpc::server::Service {
public:
  HelloService();
  virtual ~HelloService() {}

  virtual ::easy_grpc::Future<::pkg::HelloReply> SayHello(const ::pkg::HelloRequest&) = 0;
  virtual ::easy_grpc::Future<::pkg::HelloReply> SayBye(const ::pkg::HelloRequest&) = 0;

  class Stub_interface {
  public:
    virtual ~Stub_interface() {}

    virtual ::easy_grpc::Future<::pkg::HelloReply> SayHello(::pkg::HelloRequest, ::easy_grpc::client::Call_options={}) = 0;
    virtual ::easy_grpc::Future<::pkg::HelloReply> SayBye(::pkg::HelloRequest, ::easy_grpc::client::Call_options={}) = 0;
  };

  class Stub final : public Stub_interface {
  public:
    Stub(::easy_grpc::client::Channel*, ::easy_grpc::Completion_queue* = nullptr);

    ::easy_grpc::Future<::pkg::HelloReply> SayHello(::pkg::HelloRequest, ::easy_grpc::client::Call_options={}) override;
    ::easy_grpc::Future<::pkg::HelloReply> SayBye(::pkg::HelloRequest, ::easy_grpc::client::Call_options={}) override;

  private:
    ::easy_grpc::client::Channel* channel_;
    ::easy_grpc::Completion_queue* default_queue_;

    void* SayHello_tag_;
    void* SayBye_tag_;
  };

  void visit_methods(::easy_grpc::server::detail::Method_visitor&) override;

  std::unique_ptr<::easy_grpc::server::detail::Method> SayHello_method;
  std::unique_ptr<::easy_grpc::server::detail::Method> SayBye_method;

private:
  void start_listening_(const char* method_name, ::easy_grpc::Completion_queue* queue) override;

  ::easy_grpc::Future<::pkg::HelloReply> handle_SayHello(::pkg::HelloRequest);
  ::easy_grpc::Future<::pkg::HelloReply> handle_SayBye(::pkg::HelloRequest);

};

} // namespacepkg

#endif
